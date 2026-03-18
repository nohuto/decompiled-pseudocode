/*
 * XREFs of NtGdiAddFontResourceW @ 0x1C00F0900
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreAddFontResourceWInternal @ 0x1C00F0AC4 (GreAddFontResourceWInternal.c)
 *     bCheckAndCapThePath @ 0x1C00F0BF8 (bCheckAndCapThePath.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ProbeAndReadDesignVector @ 0x1C028059C (ProbeAndReadDesignVector.c)
 */

__int64 __fastcall NtGdiAddFontResourceW(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v16; // [rsp+30h] [rbp-188h]
  _BYTE v18[4]; // [rsp+80h] [rbp-138h] BYREF
  int v19; // [rsp+84h] [rbp-134h]
  _BYTE v20[160]; // [rsp+D0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0
    || a4 == 0x80000000 && PsGetCurrentProcess(v14, v13) != gpepCSRSS )
  {
    return 0LL;
  }
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 > 0x414 )
        v11 = 0;
      else
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = (unsigned __int16 *)v20;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( (unsigned int)ProbeAndReadDesignVector(v18, a6) )
    {
      if ( v19 )
      {
        v9 = (struct tagDESIGNVECTOR *)v18;
        v12 = 4 * v19 + 8;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    LODWORD(v16) = v12;
    v11 = GreAddFontResourceWInternal(v10, a2, a3, a4, a5, v9, v16);
  }
  if ( v10 )
  {
    if ( v10 != (unsigned __int16 *)v20 )
      FreeTmpBuffer(v10);
  }
  return v11;
}

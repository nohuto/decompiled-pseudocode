/*
 * XREFs of NtGdiAddFontResourceW @ 0x1C010C100
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C002431C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreAddFontResourceWInternal @ 0x1C010C2D0 (GreAddFontResourceWInternal.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C010C414 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C029157C (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 */

__int64 __fastcall NtGdiAddFontResourceW(
        const unsigned __int16 *a1,
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
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v18; // [rsp+30h] [rbp-188h]
  _BYTE v20[4]; // [rsp+80h] [rbp-138h] BYREF
  int v21; // [rsp+84h] [rbp-134h]
  unsigned __int16 v22[80]; // [rsp+D0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0
    || a4 == 0x80000000 && PsGetCurrentProcess(v14, v13, v15, v16) != gpepCSRSS )
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
      v10 = v22;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( ProbeAndReadDesignVector((struct tagDESIGNVECTOR *)v20, a6) )
    {
      if ( v21 )
      {
        v9 = (struct tagDESIGNVECTOR *)v20;
        v12 = 4 * v21 + 8;
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
    LODWORD(v18) = v12;
    v11 = GreAddFontResourceWInternal(v10, a2, a3, a4, a5, v9, v18);
  }
  if ( v10 )
  {
    if ( v10 != v22 )
      FreeTmpBuffer(v10);
  }
  return v11;
}

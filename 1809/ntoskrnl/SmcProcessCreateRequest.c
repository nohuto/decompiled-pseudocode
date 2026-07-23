/*
 * XREFs of SmcProcessCreateRequest @ 0x1408ACF68
 * Callers:
 *     SmSetStoreInformation @ 0x1406CCED0 (SmSetStoreInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmcCacheCreatePrepare @ 0x1408ACE9C (SmcCacheCreatePrepare.c)
 *     SmcCacheAdd @ 0x1408AFAF4 (SmcCacheAdd.c)
 *     SmcCacheCleanup @ 0x1408AFC04 (SmcCacheCleanup.c)
 *     SmcCacheDelete @ 0x1408AFC88 (SmcCacheDelete.c)
 *     SmcCacheInitialize @ 0x1408AFCE0 (SmcCacheInitialize.c)
 *     SmcCacheStart @ 0x1408B0034 (SmcCacheStart.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessCreateRequest(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  struct _PRIVILEGE_SET *v8; // rsi
  int Prepare; // ebx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  struct _PRIVILEGE_SET *v14; // rax
  _DWORD v16[4]; // [rsp+20h] [rbp-478h] BYREF
  __int64 v17; // [rsp+30h] [rbp-468h]
  _QWORD v18[132]; // [rsp+40h] [rbp-458h] BYREF

  v17 = a1;
  v8 = 0LL;
  v16[0] = -1;
  memset(v18, 0, sizeof(v18));
  if ( a3 == 1056 )
  {
    if ( a4 )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 1055) = *(_BYTE *)(v10 + 1055);
    }
    v11 = (_OWORD *)a2;
    v12 = v18;
    v13 = 8LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      *(v12 - 1) = v11[7];
      v11 += 8;
      --v13;
    }
    while ( v13 );
    *v12 = *v11;
    v12[1] = v11[1];
    if ( LOBYTE(v18[0]) != 3 || (v18[0] & 0xFFFFFF00) != 0 || HIDWORD(v18[2]) )
    {
      Prepare = -1073741811;
    }
    else
    {
      Prepare = SmcCacheCreatePrepare(a1);
      if ( Prepare >= 0 )
      {
        v14 = (struct _PRIVILEGE_SET *)SmAlloc(0x428uLL, 0x61436D73u);
        v8 = v14;
        if ( v14 )
        {
          SmcCacheInitialize(v14);
          HIWORD(v18[131]) = 0;
          Prepare = SmcCacheStart(v8, &v18[1], &v18[4]);
          if ( Prepare >= 0 )
          {
            Prepare = SmcCacheAdd(a1, v8, v16);
            if ( Prepare >= 0 )
            {
              v8 = 0LL;
              v16[1] = 1;
              Prepare = 0;
              *(_DWORD *)(a2 + 4) = v16[0];
            }
          }
        }
        else
        {
          Prepare = -1073741670;
        }
      }
    }
  }
  else
  {
    Prepare = -1073741306;
  }
  if ( v16[0] != -1 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32LL * (v16[0] & 0xF) + 8));
  if ( v8 )
  {
    SmcCacheCleanup(v8);
    CmSiFreeMemory(v8);
  }
  return (unsigned int)Prepare;
}

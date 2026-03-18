/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1406585C8
 * Callers:
 *     MiDeprioritizeVad @ 0x14013B5DC (MiDeprioritizeVad.c)
 *     CcUnmapVacb @ 0x140607830 (CcUnmapVacb.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     PfpRpLogDeprioEvent @ 0x1400972F8 (PfpRpLogDeprioEvent.c)
 *     PfLockSharedTryAcquire @ 0x140097378 (PfLockSharedTryAcquire.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((ULONG_PTR)&qword_140467C08) )
    return v6;
  v7 = qword_140467BE8;
  if ( a2 != *(_QWORD *)(qword_140467BE8 + 8) )
  {
    v8 = -1LL << (dword_140467BDC & 0x1F);
    v9 = a2 & v8;
    if ( (unsigned int)dword_140467BDC < 0x20 )
      goto LABEL_31;
    v16 = a2 & v8;
    v7 = qword_140467BE0
       + 8LL
       * ((37
         * (BYTE6(v16)
          + 37
          * (BYTE5(v16)
           + 37
           * (BYTE4(v16)
            + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v16)) & (((unsigned int)dword_140467BDC >> 5) - 1));
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_8;
    }
    v7 = 0LL;
LABEL_8:
    if ( !v7 )
    {
LABEL_31:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140467C08, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140467C08);
      KeAbPostRelease((ULONG_PTR)&qword_140467C08);
      KeLeaveCriticalRegion();
      return v6;
    }
    qword_140467BE8 = v7;
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140467C08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140467C08);
  KeAbPostRelease((ULONG_PTR)&qword_140467C08);
  KeLeaveCriticalRegion();
  if ( qword_140467C28 == v10 )
    goto LABEL_20;
  if ( (unsigned int)PfLockSharedTryAcquire((ULONG_PTR)&qword_140467C30) )
  {
    if ( !(_DWORD)qword_140467C1C )
      goto LABEL_16;
    v11 = 0LL;
    v12 = (37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & (unsigned int)(qword_140467C1C - 1);
    if ( !*(_QWORD *)((v12 << dword_140467C18) + qword_140467C10) )
      goto LABEL_16;
    v14 = *(_QWORD *)((v12 << dword_140467C18) + qword_140467C10);
    do
    {
      v15 = v14;
      if ( v14 == v10 )
        break;
      if ( !v11 )
      {
        v11 = 2654435761LL * v10 + 1;
        if ( ((-79 * (_BYTE)v10) & 1) != 0 )
          v11 = 2654435761LL * v10;
      }
      v12 = (unsigned int)(qword_140467C1C - 1) & (v11 + v12);
      v15 = *(_QWORD *)((v12 << dword_140467C18) + qword_140467C10);
      v14 = v15;
    }
    while ( v15 );
    if ( v15 )
    {
      qword_140467C28 = v10;
    }
    else
    {
LABEL_16:
      v6 = 1;
      qword_140467C68 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140467C30, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140467C30);
    KeAbPostRelease((ULONG_PTR)&qword_140467C30);
    KeLeaveCriticalRegion();
LABEL_20:
    PfpRpLogDeprioEvent(a2, a1, v6 != 0 ? a3 : 0);
  }
  return v6;
}

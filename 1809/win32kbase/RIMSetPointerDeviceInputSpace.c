/*
 * XREFs of RIMSetPointerDeviceInputSpace @ 0x1C0113408
 * Callers:
 *     NtSetPointerDeviceInputSpace @ 0x1C00EE140 (NtSetPointerDeviceInputSpace.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0153548 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall RIMSetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2, __int128 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int v7; // edi
  __int64 v8; // rbx
  struct CEResource *v9; // rdx
  __int128 v10; // xmm0
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  PERESOURCE *v13; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 424);
  v4 = a1 + 88;
  v7 = 0;
  RIMLockExclusive(v3 + 104);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 480);
    if ( *(_DWORD *)(v8 + 24) != 7 )
    {
      RIMLockExclusive(v3 + 568);
      CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v12, v9);
      if ( a2 )
      {
        if ( !InputConfig::GetInputSpace(*a2, (struct CLockedInputSpace *)v12) )
        {
          v7 = -1073741811;
          goto LABEL_13;
        }
        *(_DWORD *)(v8 + 236) = 1;
        *(struct _LUID *)(v8 + 240) = *a2;
        if ( a3 )
        {
          *(_DWORD *)(v8 + 248) = 1;
          v10 = *a3;
          goto LABEL_11;
        }
        *(_DWORD *)(v8 + 248) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 236) = 0;
        *(_DWORD *)(v8 + 248) = 0;
        *(_QWORD *)(v8 + 240) = 0LL;
      }
      v10 = 0u;
LABEL_11:
      *(_OWORD *)(v8 + 252) = v10;
      RIMSetDeviceOutputConfig((struct RIMDEV *)v4, (struct tagHID_POINTER_DEVICE_INFO *)v8, 1u, 0LL);
LABEL_13:
      *(_QWORD *)(v3 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
      KeLeaveCriticalRegion();
      CEResourceLockExclusive::~CEResourceLockExclusive(&v13);
      goto LABEL_14;
    }
  }
  v7 = -1073741811;
LABEL_14:
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}

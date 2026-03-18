/*
 * XREFs of ACPIFanCompletePendingIrps @ 0x1C0007AF8
 * Callers:
 *     ACPIFanLoop @ 0x1C0007938 (ACPIFanLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // bl
  KIRQL v6; // r11
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  IRP *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  void *v21; // rax
  __int64 v22; // rcx
  void *v23; // rdx
  __int64 v24; // [rsp+38h] [rbp-30h]
  _QWORD *v25; // [rsp+50h] [rbp-18h] BYREF
  _QWORD **v26; // [rsp+58h] [rbp-10h]

  v26 = &v25;
  v3 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v25 = &v25;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v7 = *(_QWORD **)(a1 + 216);
  while ( 1 )
  {
    v8 = v7;
    v9 = v7;
    if ( v7 == (_QWORD *)(a1 + 216) )
      break;
    v7 = (_QWORD *)*v7;
    v12 = *(v9 - 18);
    if ( (a2 || *(_DWORD *)v12 != *(_DWORD *)(a1 + 288)) && _InterlockedExchange64(v9 - 8, 0LL) )
    {
      *(_DWORD *)v12 = *(_DWORD *)(a1 + 288);
      if ( *(_DWORD *)(a1 + 336) == 1 || (v13 = 0, *(_BYTE *)(a1 + 284)) )
        v13 = 1;
      *(_BYTE *)(v12 + 4) = v13;
      *(v9 - 14) = 8LL;
      *((_DWORD *)v9 - 30) = 0;
      v14 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8
        || (v15 = (_QWORD *)v8[1], (_QWORD *)*v15 != v8)
        || (*v15 = v14, *(_QWORD *)(v14 + 8) = v15, v16 = v26, *v26 != &v25) )
      {
FatalListEntryError:
        __fastfail(3u);
      }
      v8[1] = v26;
      *v8 = &v25;
      *v16 = v8;
      v26 = (_QWORD **)v8;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v10 = v25;
  while ( v10 != &v25 )
  {
    v17 = (_QWORD *)*v10;
    v18 = (IRP *)(v10 - 21);
    v19 = v10;
    v10 = v17;
    v20 = (_QWORD *)v19[1];
    if ( (_QWORD *)v17[1] != v19 || (_QWORD *)*v20 != v19 )
      goto FatalListEntryError;
    *v20 = v17;
    v21 = &unk_1C006FE7D;
    v17[1] = v20;
    v22 = *(_QWORD *)(a1 + 8);
    v23 = &unk_1C006FE7D;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v23 = *(void **)(a1 + 560);
      if ( (v22 & 0x400000000000LL) != 0 )
        v21 = *(void **)(a1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = (__int64)v23;
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_qqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v23,
        16,
        20,
        (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
        (char)v18,
        a1,
        v24,
        (__int64)v21);
    }
    IofCompleteRequest(v18, 0);
    v4 = 1;
  }
  return v4;
}

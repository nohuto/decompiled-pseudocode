/*
 * XREFs of ?AcquireBuffer@CHolographicViewer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewer::AcquireBuffer(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = this + 13;
  AcquireSRWLockShared(this + 13);
  Ptr = this[9].Ptr;
  if ( !Ptr )
  {
    v8 = (int)this[12].Ptr;
    v9 = -2005270490;
    v14 = 106;
    v10 = 2289696769LL;
    if ( v8 != 3 )
      v9 = -2005270527;
    v11 = v9;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v15);
  v12 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 56LL))(Ptr, 0LL, &v15);
  v9 = v12;
  if ( v12 < 0 )
  {
    v14 = 109;
    goto LABEL_9;
  }
  v12 = (**v15)(v15, a2, a3);
  v9 = v12;
  if ( v12 < 0 )
  {
    v14 = 110;
LABEL_9:
    v11 = v12;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, v14);
  }
  ReleaseSRWLockShared(v3);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v15);
  return v9;
}

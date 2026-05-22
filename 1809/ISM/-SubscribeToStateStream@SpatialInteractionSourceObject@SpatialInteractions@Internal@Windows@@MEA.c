/*
 * XREFs of ?SubscribeToStateStream@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800BB1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800BAAC0 (-SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAE.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SubscribeToStateStream(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  const struct _GUID *v10; // rdi
  _DWORD *v11; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v12; // rcx
  int v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v15 = -2LL;
  v14 = 0;
  *(_QWORD *)&v16 = this;
  *((_QWORD *)&v16 + 1) = &v14;
  v17 = v16;
  v18 = 1;
  v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *, __int128 *))(*(_QWORD *)this + 240LL))(
         this,
         &v16);
  v3 = v2;
  v14 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 14);
    v6 = (__int64 *)((char *)this + 128);
    v7 = *((_QWORD *)this + 16);
    if ( v7 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v5 + 144LL))(v5, &v16, (char *)this + 128);
    v3 = v2;
    v14 = v2;
    if ( v2 >= 0 )
    {
      v8 = *v6;
      v9 = *((_QWORD *)this + 17);
      if ( v9 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v8 + 112LL))(v8, 6LL, (char *)this + 136);
      v3 = v2;
      v14 = v2;
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *))(*(_QWORD *)this + 248LL))(this);
        v3 = v2;
        if ( v2 >= 0 )
        {
          v3 = 0;
          goto LABEL_15;
        }
        v4 = 75LL;
      }
      else
      {
        v4 = 72LL;
      }
    }
    else
    {
      v4 = 69LL;
    }
  }
  else
  {
    v4 = 66LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(unsigned int)v2);
LABEL_15:
  v10 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 15) + 48LL))(
                                *((_QWORD *)this + 15),
                                &v17);
  v11 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v11 && *v11 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectSubscribeToStateStream_(v12, v10, v14);
  }
  return v3;
}

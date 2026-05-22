/*
 * XREFs of ?SpatialObjectDeviceStartListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800ACF34
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1cf05441c704d493333e79a897fb7b6c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7B20 (std--_Func_impl_no_alloc__lambda_1cf05441c704d493333e79a897fb7b6c__void_std--shared_ea_1800B7B20.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  int *v10; // [rsp+60h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v4 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    LODWORD(v5) = 0;
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
    }
    v9 = 0;
    v8 = 2 * v5 + 2;
    v11 = 4LL;
    if ( !a2 )
      a2 = &sourceString;
    v7 = a2;
    v10 = &v12;
    TlgWrite((TraceLoggingHProvider)v4, &unk_180168EF9, 0LL, 0LL, 4u, &pData);
  }
}

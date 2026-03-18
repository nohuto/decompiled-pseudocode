/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00071C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00044C0 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0007378 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0007430 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0008128 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000E7B4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C01A6DF4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C01C79D0 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  struct _ERESOURCE *v2; // rbx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  DirectComposition::CBatch *v7; // rcx
  DirectComposition::CAnimationBinding *v8; // rcx
  struct DirectComposition::CrossChannelVisualData *v9; // rdx
  int v10; // esi
  CInputManager *v11; // rcx
  __int64 i; // rbx
  __int64 v13; // rdx
  char v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rcx

  v2 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  v3 = 6;
  v4 = *((_QWORD *)this + 5);
  if ( *((int *)this + 6) <= 2 )
    v3 = 2;
  *((_DWORD *)this + 6) = v3;
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 8));
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 6) == 2 )
  {
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 48LL))(this, v5);
  }
  DirectComposition::CApplicationChannel::ReleaseAllResources(this, 0LL);
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v6 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v6 )
  {
    do
    {
      v15 = (_QWORD *)*v6;
      Win32FreePool(v6);
      *((_QWORD *)this + 23) = v15;
      v6 = v15;
    }
    while ( v15 );
  }
  v7 = (DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v7 )
  {
    DirectComposition::CBatch::Clear(v7);
    v16 = *((_QWORD *)this + 21);
    if ( v16 )
      Win32FreePool(v16);
    *((_QWORD *)this + 21) = 0LL;
  }
  v8 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
  if ( v8 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v8, this);
    *((_QWORD *)this + 44) = 0LL;
  }
  v9 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v9 )
  {
    *((_QWORD *)this + 49) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v9);
  }
  v10 = *((_DWORD *)this + 174);
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 120, 0LL);
    v11 = g_pInputManager;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)g_pInputManager + 28); v11 = g_pInputManager )
    {
      v17 = (_QWORD *)((char *)v11 + 104);
      if ( *(_DWORD *)(*(_QWORD *)(*v17 + 8 * i) + 4LL) == v10 )
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(v17, (unsigned int)i);
      else
        i = (unsigned int)(i + 1);
    }
    ExReleasePushLockSharedEx((char *)v11 + 120, 0LL);
  }
  v13 = *((_QWORD *)this + 22);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 32) ^= (*(_BYTE *)(v13 + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *(_DWORD *)(v13 + 16) = ++*((_DWORD *)this + 94);
    v14 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 22) = 0LL;
    DirectComposition::CConnection::UnregisterChannel(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v13,
      v14 & 1);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}

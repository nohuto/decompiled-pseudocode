/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180164AA4
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180018478 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180018C7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@2@_K1@Z @ 0x18001A13C (-_Change_array@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@s.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D9CF8 (-_Tidy@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180164564 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801646D0 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801647EC (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x180164BF0 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x180018B7C (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BF358 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801767C0 (-NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  unsigned int v1; // eax
  int v3; // ecx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  const struct CD3DDeviceLevel1 *Device; // rax
  void *v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 1) )
  {
    if ( v3 != v1 && v1 )
    {
      v4 = 0LL;
      v5 = v1;
      do
      {
        v6 = *(_QWORD *)(v4 + *((_QWORD *)this + 2));
        if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          Device = CAtlasTexture::GetDevice(*(CAtlasTexture **)v6);
          *(_QWORD *)v6 = 0LL;
          *(_DWORD *)(v6 + 16) = -1;
          CAtlasEntry::NotifyOwner((CAtlasEntry *)v6, Device);
        }
        v4 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 1,
      &v9);
    (*(void (__fastcall **)(__int64, CAtlasTexture *))(*(_QWORD *)v9 + 32LL))(v9, this);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
  }
  v8 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v8 )
    operator delete(v8);
}

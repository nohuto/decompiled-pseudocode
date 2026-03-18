/*
 * XREFs of ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x180004E80
 * Callers:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180004D98 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180205B20 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180205CF0 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180205E3C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

struct CD3DDeviceLevel1 *__fastcall CAtlasTexture::GetDevice(CAtlasTexture *this)
{
  return *(struct CD3DDeviceLevel1 **)(*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1))
                                                 + 16)
                                     + 80LL);
}

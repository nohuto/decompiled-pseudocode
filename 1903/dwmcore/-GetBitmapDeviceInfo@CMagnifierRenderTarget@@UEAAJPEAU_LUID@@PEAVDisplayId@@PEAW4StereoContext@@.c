/*
 * XREFs of ?GetBitmapDeviceInfo@CMagnifierRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAW4StereoContext@@@Z @ 0x1801AA190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTarget::GetBitmapDeviceInfo(
        CMagnifierRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        enum StereoContext *a4)
{
  __int64 v4; // rcx

  if ( a4 )
    *(_DWORD *)a4 = *((_DWORD *)this + 8 * *((unsigned int *)this + 126) + 66);
  v4 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * *((unsigned int *)this + 126));
  return (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct DisplayId *))(*(_QWORD *)v4 + 120LL))(v4, a2, a3);
}

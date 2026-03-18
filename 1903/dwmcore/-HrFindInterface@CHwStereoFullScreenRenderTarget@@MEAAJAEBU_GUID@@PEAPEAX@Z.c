/*
 * XREFs of ?HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166950
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BEB0 (-HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::HrFindInterface(
        CHwStereoFullScreenRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31.Data4;
    if ( v4 )
    {
      return CHwDisplayRenderTarget::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 424) & -(__int64)(this != (CHwStereoFullScreenRenderTarget *)96));
      return 0LL;
    }
  }
  return result;
}

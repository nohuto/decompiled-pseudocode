/*
 * XREFs of ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180078DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetViewStateData(
        ApplicationViewOperation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 132);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 148);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 164);
  return *((_BYTE *)this + 128) == 0 ? 0x80070490 : 0;
}

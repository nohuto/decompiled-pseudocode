/*
 * XREFs of ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800751E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetViewStateData(
        ApplicationViewOperation *this,
        struct APPLICATION_VIEW_DATA_UPDATE *a2)
{
  *(_OWORD *)a2 = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 9);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 10);
  return *((_BYTE *)this + 124) == 0 ? 0x80070490 : 0;
}

/*
 * XREFs of ?QueryInterface@CDuiRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F5700
 * Callers:
 *     ?QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8C70 (-QueryInterface@CDuiRefThread@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F5760 (-QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

HRESULT __fastcall CDuiRefThread::QueryInterface(CDuiRefThread *this, const struct _GUID *a2, void **a3)
{
  HRESULT result; // eax

  result = QISearch(this, &`CDuiRefThread::QueryInterface'::`2'::qit, a2, a3);
  if ( result == -2147467262 )
    return CRefThread::QueryInterface(this, a2, a3);
  return result;
}

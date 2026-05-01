/*
 * XREFs of ?GetResourceSetInfo@ResourceSetClientProxy@@UBGJPAPAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x10014690
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QAE@XZ @ 0x10013A84 (--0_ResourceSetInfo@ExecutionModel@@QAE@XZ.c)
 */

int __stdcall ResourceSetClientProxy::GetResourceSetInfo(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  ExecutionModel::_ResourceSetInfo *v2; // eax
  int v3; // ebx
  struct ExecutionModel::_ResourceSetInfo *v4; // edi

  v2 = (ExecutionModel::_ResourceSetInfo *)operator new(0x178u);
  v3 = 0;
  if ( v2 )
    v4 = ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(v2);
  else
    v4 = 0;
  *a2 = v4;
  if ( !v4 )
    return -2147024882;
  qmemcpy(v4, (char *)this + 32, 0x178u);
  return v3;
}

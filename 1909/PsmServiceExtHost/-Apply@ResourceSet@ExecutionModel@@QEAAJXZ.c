/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18000BD78
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002F678 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 * Callees:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000BDE4 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceSet *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  RmpAcquireGlobalLock();
  v2 = *((_DWORD *)this + 320);
  v3 = 0;
  if ( v2 == 1 )
  {
    v4 = -2147220219;
  }
  else if ( v2 )
  {
    if ( *((_BYTE *)this + 12) )
    {
      v4 = -2147220220;
    }
    else
    {
      v4 = ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
             *((ExecutionModel::ResourceManager **)this + 3),
             this);
      if ( v4 >= 0 )
        v4 = 0;
    }
  }
  else
  {
    v4 = -2147220218;
  }
  if ( v4 < 0 )
    v3 = v4;
  RmpReleaseGlobalLock();
  return v3;
}

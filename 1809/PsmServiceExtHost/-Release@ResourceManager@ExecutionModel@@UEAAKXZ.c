/*
 * XREFs of ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180058C00
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180049AC0 (-Release@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180047C58 (--3@YAXPEAX@Z.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x1800589C4 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Release(ExecutionModel::ResourceManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 && this )
  {
    ExecutionModel::ResourceManager::~ResourceManager(this);
    operator delete(this);
  }
  return v2;
}

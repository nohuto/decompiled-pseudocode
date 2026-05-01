/*
 * XREFs of ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180063220
 * Callers:
 *     <none>
 * Callees:
 *     ??1BaseResourceSet@ExecutionModel@@UEAA@XZ @ 0x180002F08 (--1BaseResourceSet@ExecutionModel@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180047C58 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::`vector deleting destructor'(
        ExecutionModel::BaseResourceSet *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  ExecutionModel::BaseResourceSet::~BaseResourceSet(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}

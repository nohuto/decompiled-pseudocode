/*
 * XREFs of ??0_ResourceSetInfo@ExecutionModel@@QAE@XZ @ 0x10013A84
 * Callers:
 *     ??0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z @ 0x10013A1B (--0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UBGJPAPAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x10014690 (-GetResourceSetInfo@ResourceSetClientProxy@@UBGJPAPAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceSetInfo *__thiscall ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(
        ExecutionModel::_ResourceSetInfo *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  ExecutionModel::_ResourceSetInfo *result; // eax

  *(_DWORD *)this = -1;
  v2 = (_DWORD *)((char *)this + 80);
  *((_DWORD *)this + 3) = 32;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 101;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  v3 = 3;
  do
  {
    *v2 = -1;
    v2 += 6;
    *(v2 - 4) = 0;
    *(v2 - 3) = 0;
    *(v2 - 2) = 101;
    *((_WORD *)v2 - 2) = 0;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 32) = 2;
  memset32((char *)this + 152, 101, 0x32u);
  *((_DWORD *)this + 11) = 1;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_BYTE *)this + 42) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  result = this;
  *((_DWORD *)this + 8) = 101;
  return result;
}

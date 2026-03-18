/*
 * XREFs of ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0019CD0
 * Callers:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0019C9C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray(
        DirectComposition::CResourceMarshalerArray *this)
{
  unsigned __int64 i; // r8
  __int64 v2; // rdx

  for ( i = 0LL; i < *((_QWORD *)this + 1); --*(_DWORD *)(v2 + 20) )
    v2 = *(_QWORD *)(*(_QWORD *)this + 8 * i++);
}

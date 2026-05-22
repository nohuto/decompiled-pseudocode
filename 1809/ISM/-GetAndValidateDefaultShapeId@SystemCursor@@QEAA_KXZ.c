/*
 * XREFs of ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x180096CCC
 * Callers:
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x18009702C (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SystemCursor::GetAndValidateDefaultShapeId(SystemCursor *this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rdx
  __int64 *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 4);
  v2 = v1;
  v3 = (__int64 *)v1[1];
  while ( !*((_BYTE *)v3 + 25) )
  {
    if ( (unsigned __int64)v3[4] >= 0x7F00 )
    {
      v2 = v3;
      v3 = (__int64 *)*v3;
    }
    else
    {
      v3 = (__int64 *)v3[2];
    }
  }
  if ( v2 == v1 || v2[4] > 0x7F00uLL )
    v2 = v1;
  if ( v2 != v1 )
    return 32512LL;
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  return *(_QWORD *)(*v1 + 32LL);
}

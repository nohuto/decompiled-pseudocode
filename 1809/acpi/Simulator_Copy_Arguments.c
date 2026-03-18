/*
 * XREFs of Simulator_Copy_Arguments @ 0x1C00615A8
 * Callers:
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0061B0C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0061C04 (Simulator_Pre_EvalNameSpaceObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 */

__int64 __fastcall Simulator_Copy_Arguments(int a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v7; // r9
  __int64 v8; // r15
  int i; // esi
  unsigned __int64 v11; // rcx

  v3 = 0;
  v4 = a1;
  if ( a3 )
  {
    if ( a2 && a1 > 0 )
    {
      v8 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1413563464, 40 * a1);
      if ( !v8 )
        return 3221225495LL;
      for ( i = 0; i < (int)v4; ++i )
      {
        v11 = 40LL * i;
        if ( v11 > 40 * v4 )
          break;
        if ( (unsigned int)DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v11 + v8, v11 + a2, v7) )
          break;
      }
      *a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}

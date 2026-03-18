/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0036C80
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0038490 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C00EC900 (ReferenceClass.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0035268 (--$FreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0036D20 (--$AllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 */

__int64 __fastcall ClassAlloc(PVOID *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE *Heap; // rax
  __int64 v8; // rax

  v2 = a2;
  v4 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
  v5 = v4;
  if ( !a1 )
  {
    if ( !v4 )
      return v5;
    v8 = Win32AllocPoolZInit(v2, 1818456917LL);
    *(_QWORD *)(v5 + 8) = v8;
    if ( v8 )
    {
      *(_QWORD *)(v5 + 16) = 0LL;
      return v5;
    }
    goto LABEL_9;
  }
  if ( !v4 )
    return 0LL;
  Heap = RtlAllocateHeap(a1[16], 0, (unsigned int)v2);
  *(_QWORD *)(v5 + 8) = Heap;
  if ( !Heap )
  {
LABEL_9:
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v5);
    return 0LL;
  }
  *(_QWORD *)(v5 + 16) = Heap - (_BYTE *)a1[2];
  return v5;
}

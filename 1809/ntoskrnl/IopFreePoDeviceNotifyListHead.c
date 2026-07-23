/*
 * XREFs of IopFreePoDeviceNotifyListHead @ 0x14056E5B0
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x14056DE10 (IoBuildPoDeviceNotifyList.c)
 *     IoFreePoDeviceNotifyList @ 0x14056E534 (IoFreePoDeviceNotifyList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreePoDeviceNotifyListHead(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    ObfDereferenceObject((PVOID)v2[8]);
    ObfDereferenceObject((PVOID)v2[6]);
    v4 = (void *)v2[9];
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72775044u);
    v5 = (void *)v2[10];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72775044u);
  }
}

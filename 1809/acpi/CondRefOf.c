/*
 * XREFs of CondRefOf @ 0x1C002B500
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 */

__int64 __fastcall CondRefOf(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned int v4; // r8d
  bool v6; // al
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 135LL, (__int64)&v9);
  if ( !v4 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 128) <= 1u )
    {
      v6 = IsCompatableDSDTRevision();
      v7 = v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v6 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      return (unsigned int)WriteObject(a1, v7, *(_QWORD *)(a2 + 80), v8);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    }
  }
  return v4;
}

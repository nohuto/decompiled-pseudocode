/*
 * XREFs of RtlEnclaveCallDispatch @ 0x1800A0560
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallEnclave @ 0x18009D8B0 (ZwCallEnclave.c)
 *     LdrCallEnclave_0 @ 0x1800CDFC0 (LdrCallEnclave_0.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall RtlEnclaveCallDispatch(void *a1, LPVOID (__cdecl *a2)(LPVOID), ULONG a3, PVOID a4)
{
  NTSTATUS i; // eax
  NTSTATUS result; // eax
  _QWORD *v7; // [rsp-20h] [rbp-20h]
  PVOID v8; // [rsp-18h] [rbp-18h] BYREF
  void *v9; // [rsp-10h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  if ( a2 )
  {
    v8 = a4;
    for ( i = LdrCallEnclave_0(a2, a3, &v8); ; i = -1073741811 )
    {
      result = ZwCallEnclave(0LL, a1, i, &v8);
      a4 = v8;
      if ( v9 )
        break;
      v8 = 0LL;
    }
  }
  else
  {
    result = a3;
  }
  *v7 = a4;
  retaddr = v9;
  return result;
}

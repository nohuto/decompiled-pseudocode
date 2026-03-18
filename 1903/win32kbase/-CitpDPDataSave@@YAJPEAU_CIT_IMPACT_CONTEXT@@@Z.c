/*
 * XREFs of ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084638
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084710 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0084F4C (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01C893C (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CitpDPDataSave(struct _CIT_IMPACT_CONTEXT *a1)
{
  void *v1; // rdi
  char *Data; // rbx
  int v3; // r9d
  __int64 v4; // r8
  NTSTATUS result; // eax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  v1 = (void *)*((_QWORD *)a1 + 68);
  Data = (char *)a1 + 552;
  v3 = *((_DWORD *)a1 + 74);
  v4 = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)a1 + 142) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                        - *((_DWORD *)a1 + 196);
  *((_QWORD *)a1 + 72) = v4;
  *((_DWORD *)a1 + 141) = v3;
  if ( !v1 )
    return -1073741637;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, L"DP");
  result = ZwSetValueKey(v1, &ValueName, 0, 3u, Data, 0xE8u);
  if ( result >= 0 )
    return 0;
  return result;
}

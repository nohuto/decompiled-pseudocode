/*
 * XREFs of ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x18004F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x18004F364 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x18013C290 (McTemplateU0pqpqqqqqq.c)
 */

__int64 __fastcall AERTMemoryInitOnce(unsigned __int64 InitOnce, unsigned __int64 Parameter, PVOID *Context)
{
  void *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  void *v8; // rdi
  unsigned int v9; // ebx
  int pvData; // [rsp+80h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+20h] BYREF

  v4 = AERTCreateHeap(InitOnce, Parameter, (unsigned __int64)Context);
  *Context = v4;
  v8 = v4;
  v9 = 0;
  if ( (byte_1801B9781 & 4) != 0 )
    McTemplateU0pqpqqqqqq(v6, v5, v7, 1, 0, 0, 0, 0);
  if ( !v8 )
    SetLastError(0xEu);
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"SkipRTHeap",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_bSkipRTHeap = pvData != 0;
  LOBYTE(v9) = v8 != 0LL;
  return v9;
}

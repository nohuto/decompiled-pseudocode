/*
 * XREFs of ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140040C80
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140040884 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     McTemplateU0pqpqqqqqq @ 0x140041190 (McTemplateU0pqpqqqqqq.c)
 */

__int64 __fastcall AERTMemoryInitOnce(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  void *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  void *v8; // rdi
  unsigned int v9; // ebx
  int pvData; // [rsp+80h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+20h] BYREF

  v4 = (void *)AERTCreateHeap();
  *Context = v4;
  v8 = v4;
  v9 = 0;
  if ( (byte_140087281 & 4) != 0 )
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

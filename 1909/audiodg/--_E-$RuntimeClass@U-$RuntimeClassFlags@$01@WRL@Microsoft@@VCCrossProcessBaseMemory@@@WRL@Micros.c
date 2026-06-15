/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14004C910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  const void *v3; // rcx
  char *v5; // rcx

  Block[11] = -1073741823;
  *(_QWORD *)Block = &CCrossProcessBaseMemory::`vftable';
  v3 = (const void *)*((_QWORD *)Block + 4);
  if ( v3 )
  {
    UnmapViewOfFile(v3);
    *((_QWORD *)Block + 4) = 0LL;
  }
  v5 = (char *)*((_QWORD *)Block + 2);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

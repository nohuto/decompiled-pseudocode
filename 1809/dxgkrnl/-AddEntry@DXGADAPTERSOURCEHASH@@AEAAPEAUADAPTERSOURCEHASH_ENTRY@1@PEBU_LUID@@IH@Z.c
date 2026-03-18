/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0153DD4
 * Callers:
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C0153D58 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C020F93C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C013BD44 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C020F830 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        char a4)
{
  _DWORD *Buffer; // rax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // rax
  char *v12; // rbx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  int v14; // ecx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax

  if ( !*(_QWORD *)((char *)this + 52) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 40), 0x80u, 0);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 14) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 40)) >> 4;
  v10 = 1 << *((_DWORD *)this + 15);
  if ( v9 > v10 )
  {
    v9 = 1 << *((_DWORD *)this + 15);
  }
  else if ( v9 != v10 )
  {
    v11 = *((unsigned int *)this + 14);
    if ( (_DWORD)v11 == v9 )
    {
      if ( v9 + 8 < v10 )
        v10 = v9 + 8;
      v12 = (char *)AUTOEXPANDALLOCATION::GetBuffer((DXGADAPTERSOURCEHASH *)((char *)this + 40), 16 * v10, 1);
      memset(&v12[16 * v9 + 16], 0, 16LL * (v10 - v9 - 1));
      v11 = *((unsigned int *)this + 14);
    }
    else
    {
      v12 = (char *)*((_QWORD *)this + 5);
    }
    Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v12[16 * v11];
    goto LABEL_9;
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, *((_DWORD *)this + 14) % v9, 0, 0LL, 0LL);
  if ( Entry )
  {
LABEL_9:
    *((_DWORD *)Entry + 3) |= 1u;
    v14 = *((_DWORD *)Entry + 3);
    *(struct _LUID *)Entry = *a2;
    *((_DWORD *)Entry + 2) = a3;
    *((_DWORD *)Entry + 3) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(2 * a4)) & 2;
    result = Entry;
    ++*((_DWORD *)this + 14);
    return result;
  }
  return 0LL;
}

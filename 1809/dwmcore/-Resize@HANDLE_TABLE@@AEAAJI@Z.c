/*
 * XREFs of ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x1800D8E44
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009A96C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1800D8DE0 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D8F0C (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall HANDLE_TABLE::Resize(HANDLE_TABLE *this, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // r15d
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  char *v12; // r14

  if ( a2 < *((_DWORD *)this + 3) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0xDDu);
  }
  else
  {
    v4 = *((unsigned int *)this + 2);
    v5 = 0;
    v6 = v4 * *((unsigned int *)this + 3);
    if ( v6 <= 0xFFFFFFFF )
      v5 = v4 * *((_DWORD *)this + 3);
    v7 = v6 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v6 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v7, 0xE0u);
    }
    else
    {
      v8 = 0;
      v9 = v4 * a2;
      if ( v9 <= 0xFFFFFFFF )
        v8 = v4 * a2;
      v7 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v9 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v7, 0xE1u);
      }
      else
      {
        v10 = (char *)ReallocHeap(*((void **)this + 3), v8);
        v12 = v10;
        if ( v10 )
        {
          memset_0(&v10[v5], 0, v8 - v5);
          *((_QWORD *)this + 3) = v12;
          *((_DWORD *)this + 3) = a2;
        }
        else
        {
          v7 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xE5u);
        }
      }
    }
  }
  return v7;
}

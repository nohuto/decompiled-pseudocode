/*
 * XREFs of ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00C546C
 * Callers:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C0007B54 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     EngpMovePointer @ 0x1C023BFEC (EngpMovePointer.c)
 */

void __fastcall vMovePointer(_DWORD *a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // edi
  int v6; // esi
  int v8; // eax
  __int64 v9; // rbp
  struct _SURFOBJ *v10; // rbp
  void (__fastcall *v11)(struct _SURFOBJ *); // rax
  LONG cy; // ecx
  void (__fastcall *v13)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v14)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax

  v5 = a3;
  v6 = a2;
  if ( a1[16] != (_DWORD)a2 || a1[17] != (_DWORD)a3 || (a1[10] & 0x100000) != 0 )
  {
    v8 = a1[10];
    a1[16] = a2;
    a1[17] = a3;
    if ( (v8 & 0x400) == 0 )
    {
      v9 = *((_QWORD *)a1 + 318);
      if ( v9 )
      {
        v10 = (struct _SURFOBJ *)(v9 + 24);
        if ( (v8 & 2) != 0 )
        {
          v11 = (void (__fastcall *)(struct _SURFOBJ *))*((_QWORD *)a1 + 427);
          if ( v11 )
          {
            v11(v10);
          }
          else
          {
            v14 = (void (__fastcall *)(struct _SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 365);
            if ( v14 )
              v14(v10, a2, a3, 0LL);
          }
        }
        if ( (a1[10] & 4) != 0 )
          EngpMovePointer(v10, v6, v5, a4 & 0xF4);
        if ( (a1[454] & 0x10000) != 0 && v5 != -1 && v6 < v10->sizlBitmap.cx )
        {
          cy = v10->sizlBitmap.cy;
          if ( v5 < cy )
          {
            v13 = (void (__fastcall *)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 365);
            if ( v13 )
              v13(v10, (unsigned int)v6, (unsigned int)(v5 - cy), 0LL);
          }
        }
      }
    }
  }
}

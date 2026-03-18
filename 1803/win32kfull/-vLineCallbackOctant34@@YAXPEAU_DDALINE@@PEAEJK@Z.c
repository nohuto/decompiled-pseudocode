/*
 * XREFs of ?vLineCallbackOctant34@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C0130270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vLineCallbackOctant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v5; // ebx
  int v7; // r13d
  int v8; // r15d
  int v9; // ebp
  unsigned __int8 *v10; // rdi
  __int64 v11; // r14
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rax
  bool v13; // sf
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp+8h]

  v5 = *((_DWORD *)a1 + 6);
  v7 = *((_DWORD *)a1 + 4);
  v8 = *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 3);
  v10 = &a2[4 * *((int *)a1 + 1)];
  v11 = a3;
  v12 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))**((_QWORD **)a1 + 4);
  v17 = v12;
  while ( 1 )
  {
    v12(*((_QWORD *)a1 + 4), a4, v10);
    if ( !--v9 )
      break;
    v10 -= 4;
    v13 = v8 + v5 < 0;
    v14 = v8 + v5;
    v15 = v14;
    if ( !v13 )
      v10 += v11;
    v16 = v14;
    v5 = v14 - v7;
    v13 = v16 < 0;
    v12 = v17;
    if ( v13 )
      v5 = v15;
  }
}

/*
 * XREFs of ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800521F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall NonPointerProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)a1 && (*(_BYTE *)(*(_QWORD *)a1 + 4LL) & 0x3B) != 0 )
  {
    v4 = -2147024809;
    v5 = 33LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = malloc(0x28uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x28uLL);
    v9 = *((_QWORD *)a1 + 1);
    v10 = *(_QWORD *)a1;
    v8[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v8 + 4) = 1;
    *v8 = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
    v8[1] = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
    v8[4] = v10;
    v8[3] = v9;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 40LL;
    goto LABEL_4;
  }
  *a2 = (struct IInputProcessor *)v8;
  return 0LL;
}

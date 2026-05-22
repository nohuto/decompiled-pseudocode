/*
 * XREFs of ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800CA674
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18007247C (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800C9D70 (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1800CA068 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessor::Create(struct EdgyProcessor **a1)
{
  _QWORD *v2; // rbx
  int v3; // esi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  struct EdgyConnection *v7; // rax
  const char *v8; // r9
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147024809;
    v4 = 55LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_18;
  }
  v5 = malloc(0x80uLL);
  v6 = v5;
  if ( v5 )
    memset_0(v5, 0, 0x80uLL);
  if ( v6 )
  {
    memset_0(v6, 0, 0x80uLL);
    v6[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v6 + 4) = 1;
    *v6 = &EdgyProcessor::`vftable'{for `IContextualProcessor'};
    v6[1] = &EdgyProcessor::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v6 + 6) = -1;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 9) = 0;
    *((_DWORD *)v6 + 10) = 0;
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[8] = 0LL;
    v6[9] = 0LL;
    v6[10] = 0LL;
    v6[11] = 0LL;
    *((_DWORD *)v6 + 24) = 0;
    v7 = EdgyConnection::Get();
    v6[13] = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct EdgyConnection *, struct EdgyConnection *))(*(_QWORD *)v7 + 8LL))(v7, v7);
    QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v6 + 14));
    if ( !v6[13] )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        v8);
      JUMPOUT(0x1800CA811LL);
    }
  }
  v2 = v6;
  if ( !v6 )
  {
    v3 = -2147024882;
    v4 = 58LL;
    goto LABEL_16;
  }
  v9 = EdgyConnection::Initialize((EdgyConnection *)v6[13]);
  v3 = v9;
  if ( v9 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      (const char *)(unsigned int)v9);
  if ( v3 < 0 )
  {
    v4 = 60LL;
    goto LABEL_16;
  }
  v2 = 0LL;
  *a1 = (struct EdgyProcessor *)v6;
  v3 = 0;
LABEL_18:
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  return (unsigned int)v3;
}

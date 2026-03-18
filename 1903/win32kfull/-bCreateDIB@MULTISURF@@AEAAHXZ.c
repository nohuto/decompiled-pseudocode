/*
 * XREFs of ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C029F7A4
 * Callers:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C029FC84 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MULTISURF::bCreateDIB(MULTISURF *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  void (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *); // rax
  _DWORD *v9; // rcx
  _DWORD v11[4]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v12; // [rsp+78h] [rbp+7h]
  int v13; // [rsp+80h] [rbp+Fh]
  int v14; // [rsp+84h] [rbp+13h]
  __int64 v15; // [rsp+88h] [rbp+17h] BYREF
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  __int64 v18; // [rsp+98h] [rbp+27h] BYREF
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  v17 = *(_DWORD *)(*(_QWORD *)this + 60LL);
  v15 = 0LL;
  v16 = v4;
  ERECTL::operator*=((int *)&v15, (int *)this + 2);
  v19 = v16 - v15;
  v18 = 0LL;
  v20 = v17 - HIDWORD(v15);
  v11[3] = 0;
  v14 = 0;
  v11[0] = *(_DWORD *)(v1 + 96);
  v11[1] = v16 - v15;
  v11[2] = v17 - HIDWORD(v15);
  v5 = *(__int64 **)(v1 + 128);
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  v7 = 1;
  v12 = v6;
  v13 = 1;
  if ( SURFMEM::bCreateDIB(
         (MULTISURF *)((char *)this + 40),
         (struct _DEVBITMAPINFO *)v11,
         0LL,
         0LL,
         0,
         0LL,
         0LL,
         0,
         1,
         0,
         0)
    && (v8 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))(v3 + 2840)) != 0LL )
  {
    v8(
      (*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL),
      *(_QWORD *)this + 24LL,
      0LL,
      0LL,
      &v18,
      &v15);
    v9 = (_DWORD *)*((_QWORD *)this + 12);
    *((_DWORD *)this + 14) = *v9 - v15;
    *((_DWORD *)this + 15) = v9[1] - HIDWORD(v15);
    *((_DWORD *)this + 16) = v9[2] - v15;
    *((_DWORD *)this + 17) = v9[3] - HIDWORD(v15);
  }
  else
  {
    return 0;
  }
  return v7;
}

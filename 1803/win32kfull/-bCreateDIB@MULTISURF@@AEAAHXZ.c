/*
 * XREFs of ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C027618C
 * Callers:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C0276654 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall MULTISURF::bCreateDIB(MULTISURF *this)
{
  __int64 v1; // r14
  int v3; // edx
  __int64 v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  unsigned int v7; // edi
  void (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD, _DWORD *, int *); // rax
  _DWORD *v9; // rcx
  _QWORD v11[4]; // [rsp+68h] [rbp-9h] BYREF
  int v12; // [rsp+88h] [rbp+17h] BYREF
  int v13; // [rsp+8Ch] [rbp+1Bh]
  int v14; // [rsp+90h] [rbp+1Fh]
  int v15; // [rsp+94h] [rbp+23h]
  _DWORD v16[4]; // [rsp+98h] [rbp+27h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 60LL);
  v4 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  v12 = 0;
  v13 = 0;
  v15 = v3;
  v14 = v5;
  ERECTL::operator*=(&v12, (int *)this + 2);
  v16[0] = 0;
  v16[1] = 0;
  v16[2] = v14 - v12;
  v16[3] = v15 - v13;
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[0]) = *(_DWORD *)(v1 + 96);
  HIDWORD(v11[0]) = v14 - v12;
  LODWORD(v11[1]) = v15 - v13;
  v6 = *(_QWORD **)(v1 + 128);
  if ( v6 )
    v6 = (_QWORD *)*v6;
  v7 = 1;
  v11[2] = v6;
  LODWORD(v11[3]) = 1;
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
    && (v8 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD *, int *))(v4 + 2832)) != 0LL )
  {
    v8(
      (*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL),
      *(_QWORD *)this + 24LL,
      0LL,
      0LL,
      v16,
      &v12);
    v9 = (_DWORD *)*((_QWORD *)this + 12);
    *((_DWORD *)this + 14) = *v9 - v12;
    *((_DWORD *)this + 15) = v9[1] - v13;
    *((_DWORD *)this + 16) = v9[2] - v12;
    *((_DWORD *)this + 17) = v9[3] - v13;
  }
  else
  {
    return 0;
  }
  return v7;
}

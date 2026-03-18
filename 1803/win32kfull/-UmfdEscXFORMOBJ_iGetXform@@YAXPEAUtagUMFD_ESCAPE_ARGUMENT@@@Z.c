/*
 * XREFs of ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C007F1C0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C007F260 (XFORMOBJ_iGetXform.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C007F2BC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall UmfdEscXFORMOBJ_iGetXform(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  struct UmfdTls *v2; // rax
  XFORMOBJ *v3; // rcx
  XFORML pxform; // [rsp+30h] [rbp-28h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v2 = UmfdTls::EnsureTls();
  if ( v2 && (v3 = (XFORMOBJ *)*((_QWORD *)v2 + 4)) != 0LL )
  {
    *(_DWORD *)v1 = XFORMOBJ_iGetXform(v3 + 52, &pxform);
    ProbeForWrite(v1[1], 0x18uLL, 4u);
    *(XFORML *)v1[1] = pxform;
  }
  else
  {
    *(_DWORD *)v1 = -1;
  }
}

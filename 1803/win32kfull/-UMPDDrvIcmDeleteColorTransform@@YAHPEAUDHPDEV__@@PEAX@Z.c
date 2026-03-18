/*
 * XREFs of ?UMPDDrvIcmDeleteColorTransform@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x1C027A930
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

_BOOL8 __fastcall UMPDDrvIcmDeleteColorTransform(struct DHPDEV__ *a1, void *a2)
{
  BOOL v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v9[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  memset(v9, 0, sizeof(v9));
  v4 = 0;
  if ( v8 )
  {
    v9[0] = 0x4100000028LL;
    v9[2] = *(_QWORD *)v8;
    v9[3] = a1;
    v9[4] = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v9, 0x28u, &v7, Size) != -1 )
      v4 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v4;
}

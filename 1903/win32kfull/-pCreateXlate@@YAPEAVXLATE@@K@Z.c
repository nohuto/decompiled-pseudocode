/*
 * XREFs of ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02B833C
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B7D3C (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

struct XLATE *__fastcall pCreateXlate(int a1)
{
  struct XLATE *result; // rax
  int v3; // edx
  char *v4; // rcx

  result = (struct XLATE *)AllocThreadBufferWithTag((unsigned int)(4 * a1 + 88), 1953265735LL, 0LL);
  if ( result )
  {
    v3 = 0;
    *(_DWORD *)result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
    v4 = (char *)result + 84;
    if ( !a1 )
    {
      v3 = 512;
      v4 = 0LL;
    }
    *((_DWORD *)result + 1) = a1 != 0 ? 2 : 0;
    *((_QWORD *)result + 2) = v4;
    *((_DWORD *)result + 19) = v3;
    *((_DWORD *)result + 9) = -1;
    *((_DWORD *)result + 2) = 0;
    *((_DWORD *)result + 3) = a1;
    *((_QWORD *)result + 5) = 0LL;
    *((_QWORD *)result + 6) = 0LL;
    *((_QWORD *)result + 7) = 0LL;
  }
  return result;
}

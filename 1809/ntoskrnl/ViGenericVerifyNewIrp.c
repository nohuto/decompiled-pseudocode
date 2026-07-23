/*
 * XREFs of ViGenericVerifyNewIrp @ 0x140928080
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140937124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 */

void __fastcall ViGenericVerifyNewIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5)
{
  BOOL v7; // edx
  BOOL v8; // ecx
  int v9; // r8d
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned __int8 v12; // di
  char pszDest[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a2 + 72) || *(_QWORD *)(a2 + 80) )
  {
    v7 = (*(_DWORD *)(a2 + 16) & 0x402) == 0 || (*(_DWORD *)(a2 + 16) & 0x440) == 0;
    v8 = v7;
    if ( v7 )
    {
      v9 = *(char *)(a2 + 66);
      v10 = *(char *)(a2 + 67) - 1;
      if ( v10 <= v9 )
      {
        v11 = (_QWORD *)(*(_QWORD *)(a2 + 184) - 16LL);
        while ( !*v11 )
        {
          v11 += 9;
          if ( ++v10 > v9 )
          {
            v8 = v7;
            goto LABEL_10;
          }
        }
        v8 = 0;
      }
    }
LABEL_10:
    if ( v8 )
    {
      v12 = *(_BYTE *)(a1 + 60);
      if ( v12 )
      {
        ViErrorDisplayDescription(770LL);
        if ( RtlStringCbPrintfA(
               pszDest,
               0x5BuLL,
               "CulpritAddress = %p, Irp = %p, IRQL = %u.\n",
               a5,
               (const void *)a2,
               v12) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(770LL, a5, a2, v12);
      }
    }
  }
}

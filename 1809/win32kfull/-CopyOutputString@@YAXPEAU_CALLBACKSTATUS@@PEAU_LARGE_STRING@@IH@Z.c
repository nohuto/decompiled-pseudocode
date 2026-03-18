/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00B0068
 * Callers:
 *     SfnOUTSTRING @ 0x1C00AF100 (SfnOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1C00BEB60 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C00DAF0C (xxxClientExpandStringW.c)
 *     ClientGetListboxString @ 0x1C014F55C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FF1F0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FF7E0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     MBToWCSEx @ 0x1C0007ABC (MBToWCSEx.c)
 *     wcsncpycch @ 0x1C00B0184 (wcsncpycch.c)
 *     WCSToMBEx @ 0x1C012D480 (WCSToMBEx.c)
 *     strncpycch @ 0x1C0241A44 (strncpycch.c)
 */

void __fastcall CopyOutputString(struct _CALLBACKSTATUS *a1, PWCH *a2, unsigned int a3, int a4)
{
  unsigned int v6; // ecx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // eax
  signed int v14; // r8d

  v6 = *((_DWORD *)a1 + 2);
  if ( v6 )
    ProbeForRead(*((volatile void **)a1 + 2), v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v14 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 >= *((_DWORD *)a1 + 2) )
        v14 = *((_DWORD *)a1 + 2);
      v10 = MBToWCSEx(v6, *((const CHAR **)a1 + 2), v14, a2 + 1, a3);
      if ( v10 >= a3 )
        goto LABEL_9;
      a2[1][v10] = 0;
    }
    else
    {
      if ( a3 >= *((_DWORD *)a1 + 2) >> 1 )
        v9 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
      else
        LODWORD(v9) = a3;
      v10 = wcsncpycch(a2[1], *((_QWORD *)a1 + 2), (unsigned int)v9);
    }
    a3 = v10;
LABEL_9:
    a3 *= 2;
    goto LABEL_10;
  }
  v11 = *((_QWORD *)a1 + 2);
  if ( a4 )
  {
    v13 = strncpycch(a2[1], v11);
    goto LABEL_17;
  }
  v12 = *((_DWORD *)a1 + 2) >> 1;
  if ( *(_DWORD *)a1 < (unsigned int)v12 )
    v12 = *(unsigned int *)a1;
  v13 = WCSToMBEx(0LL, v11, v12, a2 + 1, a3);
  if ( v13 < a3 )
  {
    *((_BYTE *)a2[1] + v13) = 0;
LABEL_17:
    a3 = v13;
  }
LABEL_10:
  *(_DWORD *)a2 = a3;
}

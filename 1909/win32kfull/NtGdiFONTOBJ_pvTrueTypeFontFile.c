/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AD180
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C009E55C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C028D2D8 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rdi
  void *v9; // rsi
  struct _FONTOBJ *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rbx
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF
  void *v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = (_DWORD *)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v9 = 0LL;
  v10 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    v16 = *((_DWORD *)v7 + 93);
    v9 = (void *)*((_QWORD *)v7 + 45);
    if ( !v9 )
    {
      v9 = FONTOBJ_pvTrueTypeFontFileUMPD(v10, &v16, &v17);
      if ( v9 )
      {
        v15 = v17;
        *((_QWORD *)v7 + 47) = PsGetCurrentProcess(v12, v11, v13, v14);
        *((_QWORD *)v7 + 45) = v9;
        *((_QWORD *)v7 + 44) = v15;
        *((_DWORD *)v7 + 93) = v16;
      }
    }
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = v9 != 0LL ? v16 : 0;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return v9;
}

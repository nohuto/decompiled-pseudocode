/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AD630
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0054CFC (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C028D968 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rdi
  void *v10; // rsi
  struct _FONTOBJ *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rbx
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF
  void *v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = (_DWORD *)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = 0LL;
  v11 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    v17 = *((_DWORD *)v8 + 93);
    v10 = (void *)*((_QWORD *)v8 + 45);
    if ( !v10 )
    {
      v10 = FONTOBJ_pvTrueTypeFontFileUMPD(v11, &v17, &v18);
      if ( v10 )
      {
        v16 = v18;
        *((_QWORD *)v8 + 47) = PsGetCurrentProcess(v13, v12, v14, v15);
        *((_QWORD *)v8 + 45) = v10;
        *((_QWORD *)v8 + 44) = v16;
        *((_DWORD *)v8 + 93) = v17;
      }
    }
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    *v4 = v10 != 0LL ? v17 : 0;
  }
  if ( v8 )
    --*((_DWORD *)v8 + 105);
  return v10;
}

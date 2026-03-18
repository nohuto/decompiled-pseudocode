/*
 * XREFs of ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00E8C1C
 * Callers:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00E8B84 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00E8BEC (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall DWMALTSPRITEREF::hspLookupWindow(HWND a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  HWND Buffer[3]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  Buffer[0] = a1;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, (struct DwmState *)((char *)g_pDwmState + 72));
  v2 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  if ( v2 )
    v1 = v2[1];
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v1;
}

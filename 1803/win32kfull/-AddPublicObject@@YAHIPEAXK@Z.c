/*
 * XREFs of ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01CED34
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF4F4 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFD08 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFF40 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01CEFFC (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01CF040 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 */

__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v9 = *((_DWORD *)v6 + 4);
      if ( v9 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v9 + 1;
        return 1LL;
      }
      UserSetLastError(3221225621LL, v7);
    }
    else
    {
      v8 = Win32AllocPool(24LL, 878998357LL);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 16) = 1;
        *(_QWORD *)(v8 + 8) = a2;
        *(_DWORD *)(v8 + 20) = a3;
        *(_QWORD *)v8 = gpPublicObjectList;
        gpPublicObjectList = v8;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}

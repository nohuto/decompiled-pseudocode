/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0020980
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v13[0] = 35076;
  v13[1] = 35348;
  v13[2] = 35620;
  result = *(_QWORD *)(v2 + 336);
  if ( (result & 0x80000000000000LL) != 0 )
  {
    v6 = 0;
    v7 = v13;
    do
    {
      v8 = *(_QWORD *)(a1 + 24) + *v7;
      result = XilRegister_ReadUlong(a1, v8);
      v9 = *(_DWORD *)(a1 + 116);
      v10 = (unsigned int)result;
      if ( a2 )
      {
        if ( (result & 0x2000000) != 0 )
          v11 = v9 | (1 << v6);
        else
          v11 = v9 & ~(1 << v6);
        *(_DWORD *)(a1 + 116) = v11;
      }
      else
      {
        v12 = result & 0xFDFFFFFF;
        LODWORD(v10) = v10 | 0x2000000;
        if ( !_bittest(&v9, v6) )
          v10 = v12;
        result = XilRegister_WriteUlong(a1, v8, v10);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 3 );
  }
  return result;
}

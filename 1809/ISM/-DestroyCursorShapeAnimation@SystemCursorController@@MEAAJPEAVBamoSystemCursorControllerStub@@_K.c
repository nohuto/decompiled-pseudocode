/*
 * XREFs of ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800927C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursor@@@1@AEB_K@Z @ 0x18009437C (--A-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800944A0 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::DestroyCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  wil::details::in1diag3 *v4; // r14
  wil::details::in1diag3 *v8; // rcx
  SystemCursorService *v9; // rbx
  SystemCursor **v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  wil::details::in1diag3 *v15; // rcx
  const char *v16; // r9
  __int64 result; // rax
  SystemCursor *v18; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    if ( !*((_QWORD *)this + 12) )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 36) == *((_DWORD *)this + 18) )
    {
      v8 = retaddr;
      if ( !HIBYTE(a4) )
      {
        v9 = (SystemCursorService *)*((_QWORD *)this + 12);
        v4 = retaddr;
        if ( SystemCursorService::CursorExists(v9, a3) )
        {
          v20 = a3;
          v10 = (SystemCursor **)std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::operator[](
                                   (char *)v9 + 48,
                                   &v20);
          v11 = (volatile signed __int32 *)v10[1];
          if ( v11 )
          {
            _InterlockedIncrement(v11 + 2);
            v11 = (volatile signed __int32 *)v10[1];
          }
          v18 = *v10;
          v12 = (__int64 *)*((_QWORD *)*v10 + 4);
          v13 = (__int64 *)v12[1];
          v14 = v12;
          if ( *((_BYTE *)v13 + 25) )
            goto LABEL_15;
          do
          {
            if ( v13[4] >= a4 )
            {
              v14 = v13;
              v13 = (__int64 *)*v13;
            }
            else
            {
              v13 = (__int64 *)v13[2];
            }
          }
          while ( !*((_BYTE *)v13 + 25) );
          if ( v14 == v12 || a4 < v14[4] )
LABEL_15:
            v14 = v12;
          v15 = retaddr;
          if ( v14 != v12 )
          {
            SystemCursor::RemoveShape(v18, a4);
            if ( v11 )
            {
              if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
                if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
              }
            }
            return 0LL;
          }
LABEL_26:
          wil::details::in1diag3::_Throw_Hr(
            v15,
            (void *)0x102,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorcontroller.cpp",
            (const char *)0x80070057LL);
          JUMPOUT(0x1800929A4LL);
        }
LABEL_25:
        wil::details::in1diag3::_Throw_Hr(
          v4,
          (void *)0xFF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)0x80070057LL);
        goto LABEL_26;
      }
    }
    else
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xF7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    }
    wil::details::in1diag3::_Throw_Hr(
      v8,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_25;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x109,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v16);
    return 0LL;
  }
  return result;
}

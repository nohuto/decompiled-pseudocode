/*
 * XREFs of ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180090B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z @ 0x18008F09C (-IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x18008F360 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18010540C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDestTarget::DeliverInput(InputDestTarget *this, struct InputInfo *a2)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  int v16; // edi
  const struct std::nothrow_t *v17; // rdx
  const char *v18; // r9
  const struct std::nothrow_t *v19; // rdx
  __int64 result; // rax
  int v21; // [rsp+38h] [rbp-A0h] BYREF
  void *v22; // [rsp+40h] [rbp-98h]
  _OWORD v23[8]; // [rsp+50h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    if ( !a2 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
        (const char *)0x80070057LL);
      JUMPOUT(0x180090DB3LL);
    }
    if ( (*(_BYTE *)a2 & 0x3B) != 0 )
    {
      v23[0] = *(_OWORD *)((char *)a2 + 392);
      v23[1] = *(_OWORD *)((char *)a2 + 408);
      v23[2] = *(_OWORD *)((char *)a2 + 424);
      v23[3] = *(_OWORD *)((char *)a2 + 440);
      if ( *(float *)v23 != 1.0 || !IsIdentityTransform((float *)v23) )
      {
        v5 = 0;
        if ( *((_DWORD *)a2 + 12) )
        {
          while ( 1 )
          {
            v6 = 32LL * v5;
            v7 = (float)*(int *)((char *)a2 + v6 + 68);
            v8 = (float)(*((float *)a2 + 105) * v7) - *((float *)a2 + 103);
            v9 = (float)*(int *)((char *)a2 + v6 + 64);
            v10 = (float)(*((float *)a2 + 101) * v9) - *((float *)a2 + 98);
            v11 = (float)(v9 * *((float *)a2 + 105)) - *((float *)a2 + 102);
            v12 = (float)(*((float *)a2 + 101) * v7) - *((float *)a2 + 99);
            if ( (float)(v10 * v8) == (float)(v12 * v11) )
              break;
            v13 = (float)(v10 * v8) - (float)(v12 * v11);
            v14 = (float)(*((float *)a2 + 113) * v7) - *((float *)a2 + 111);
            v15 = (float)(*((float *)a2 + 113) * v9) - *((float *)a2 + 110);
            *(_DWORD *)((char *)a2 + v6 + 72) = (int)(float)((float)((float)(v14 * v11) - (float)(v15 * v8)) / v13);
            *(_DWORD *)((char *)a2 + v6 + 76) = (int)(float)((float)((float)(v15 * v12) - (float)(v14 * v10)) / v13);
            if ( ++v5 >= *((_DWORD *)a2 + 12) )
              goto LABEL_13;
          }
          *((_QWORD *)a2 + 49) = 1065353216LL;
          *((_QWORD *)a2 + 50) = 0LL;
          *((_DWORD *)a2 + 102) = 0;
          *(_QWORD *)((char *)a2 + 412) = 1065353216LL;
          *(_QWORD *)((char *)a2 + 420) = 0LL;
          *((_DWORD *)a2 + 107) = 0;
          *((_QWORD *)a2 + 54) = 1065353216LL;
          *((_QWORD *)a2 + 55) = 0LL;
          *((_DWORD *)a2 + 112) = 0;
          *((_DWORD *)a2 + 113) = 1065353216;
        }
      }
    }
LABEL_13:
    InputEventPayloadBuffer::InputEventPayloadBuffer(&v21, 4LL, a2);
    v16 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                           + 24LL))(
            NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
            (char *)this + 24,
            v22,
            v21);
    InputETW::InputTarget::DeliverInputReport(a2);
    if ( v16 >= 0 )
    {
      if ( v22 )
        operator delete(v22, v17);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
        (const char *)(unsigned int)v16);
      if ( v22 )
        operator delete(v22, v19);
      result = (unsigned int)v16;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x54,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
                           v18);
  }
  return result;
}

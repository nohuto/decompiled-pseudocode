/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800F4814
 * Callers:
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1800F442C (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800F5CF0 (-Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1800F7CBC (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800FAD1C (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800FEC20 (-Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180100190 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  MPCInputProviderBase *result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 56, 0, 0x140uLL);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  v2 = operator new(0x10uLL);
  *((_QWORD *)this + 47) = v2;
  *v2 = 0LL;
  **((_QWORD **)this + 47) = (char *)this + 376;
  *((_DWORD *)this + 105) = 3;
  memset_0(v6, 0, sizeof(v6));
  v3 = v6[0];
  *((_BYTE *)this + 456) = 0;
  v4 = v6[1];
  *((_DWORD *)this + 104) = 90;
  *(_OWORD *)((char *)this + 424) = v3;
  *(_OWORD *)((char *)this + 440) = v4;
  memset_0((char *)this + 464, 0, 0x640uLL);
  *((_DWORD *)this + 122) = 1600;
  memset_0((char *)this + 2064, 0, 0x640uLL);
  *((_DWORD *)this + 522) = 1600;
  *((_WORD *)this + 1832) = 0;
  *((_BYTE *)this + 3666) = 0;
  memset_0((char *)this + 3672, 0, 0x30uLL);
  result = this;
  *((_BYTE *)this + 3676) = 0;
  *((_QWORD *)this + 460) = 0LL;
  *((_DWORD *)this + 922) = 0;
  *((_QWORD *)this + 462) = 0LL;
  *((_QWORD *)this + 463) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_DWORD *)this + 918) = 1106247680;
  *((_QWORD *)this + 465) = 0LL;
  *((_QWORD *)this + 466) = 0LL;
  *((_QWORD *)this + 467) = 0LL;
  *((_BYTE *)this + 3744) = 0;
  *((_DWORD *)this + 937) = 1;
  return result;
}

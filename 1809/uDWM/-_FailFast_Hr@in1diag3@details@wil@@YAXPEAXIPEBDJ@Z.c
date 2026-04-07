/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073BB0
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18003ECF4 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18003FA10 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___::_lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___ @ 0x18004DEF8 (wil--details--lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___--_lambda_call__lambda_9a17.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180073304 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180071550 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 3, (unsigned int)a4);
}
